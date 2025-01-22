// Variables for storing soil moisture data
int soilMoistureValue = 0; // Raw sensor reading
int percentage = 0;       // Calculated moisture level in percentage

// Initialization function
void setup() {
  pinMode(3, OUTPUT); // Configure pin 3 as an output for pump control
  Serial.begin(9600); // Initialize serial communication

  // Initial debug messages
  Serial.println("=== Automatic Plant Watering System ===");
  Serial.println("System Initialized");
  Serial.println("Monitoring soil moisture levels...");
  Serial.println("======================================");
}

// Main program loop
void loop() {
  // Read raw soil moisture data
  soilMoistureValue = analogRead(A0);

  // Convert raw data to percentage
  percentage = map(soilMoistureValue, 490, 1023, 100, 0);

  // Print raw data and calculated percentage
  printSensorData(soilMoistureValue, percentage);

  // Check soil moisture and control pump
  if (percentage < 10) {
    activatePump();
  } else if (percentage > 80) {
    deactivatePump();
  } else {
    maintainMoisture();
  }

  // Provide feedback and insights
  checkMoistureHealth(percentage);
  logDiagnostics(soilMoistureValue, percentage);

  // Add a delay for stability
  delay(500);
}

// Function to print sensor data
void printSensorData(int rawValue, int moisturePercent) {
  Serial.println("------------- Sensor Data -------------");
  Serial.print("Raw Value: ");
  Serial.println(rawValue);
  Serial.print("Moisture Percentage: ");
  Serial.println(moisturePercent);
  Serial.println("---------------------------------------");
}

// Function to activate the pump
void activatePump() {
  Serial.println("Moisture is too low. Activating pump...");
  digitalWrite(3, LOW); // Turn the pump ON
}

// Function to deactivate the pump
void deactivatePump() {
  Serial.println("Moisture is sufficient. Deactivating pump...");
  digitalWrite(3, HIGH); // Turn the pump OFF
}

// Function to indicate that no action is needed
void maintainMoisture() {
  Serial.println("Moisture levels are adequate. No action required.");
}

// Function to check moisture health
void checkMoistureHealth(int moisturePercent) {
  if (moisturePercent < 50) {
    Serial.println("Advisory: Soil moisture is below optimal levels.");
  } else if (moisturePercent >= 50 && moisturePercent <= 80) {
    Serial.println("Advisory: Soil moisture is in the optimal range.");
  } else {
    Serial.println("Advisory: Soil may be overwatered.");
  }
}

// Function for detailed diagnostics
void logDiagnostics(int rawValue, int moisturePercent) {
  Serial.println("+++++++++++ Diagnostics ++++++++++++++");
  Serial.print("Sensor Value: ");
  Serial.println(rawValue);
  Serial.print("Calculated Moisture Percentage: ");
  Serial.println(moisturePercent);

  // Provide guidance based on percentage
  if (moisturePercent < 30) {
    Serial.println("Warning: Very dry soil detected!");
  } else if (moisturePercent > 90) {
    Serial.println("Warning: Soil is saturated with water!");
  }

  // Add a closing line for clarity
  Serial.println("+++++++++++++++++++++++++++++++++++++++");
}
