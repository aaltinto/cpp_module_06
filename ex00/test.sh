#!/bin/bash

# Create a list of inputs for testing
inputs=(
  # Integers
  "0"
  "-1"
  "42"
  "-2147483648"       # INT_MIN
  "2147483647"        # INT_MAX

  # Floats
  "4.2"
  "-3.14"
  "0.0001"
  "1.175494e-38"      # Min positive float
  "3.4028235e+38"     # Max float

  # Doubles
  "2.2250738585072014e-308"  # Min positive double
  "1.7976931348623157e+308"  # Max double
  "-1.7976931348623157e+308"  # Max double

  # Scientific Notation Variants
  "1e2"
  "2.5e-3"
  "-9.999e+5"
  "0e0"
  "7.89e01"

  # Characters
  "a"
  "Z"
  "~"
  " "

  # Edge cases
  "nan"
  "inf"
  "-inf"
  "inff"
  "nanf"
  "+inff"
  "-inff"

  # Invalid inputs
  "hello"
  "123abc"
  "--5"
  "++4.5"
  ".5"
  "5."
)

echo "========== Running ./convert Tests =========="
for input in "${inputs[@]}"; do
  echo "Input: \"$input\""
  ./convert "$input"
  echo "--------------------------------------------"
done
