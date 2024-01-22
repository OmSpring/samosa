import re

def find_and_sum(input_string):
    # Search for the pattern 'sum' followed by one or more digits
    pattern = r'sum\s+(\d+)'
    match = re.search(pattern, input_string)
    
    if match:
        # Extract the digits and calculate their sum
        digits = match.group(1)
        digit_sum = sum(int(d) for d in digits)
        return digit_sum
    else:
        return "No match found"

# Example usage
input_str = "hi hey sum 12734 hey  "
output = find_and_sum(input_str)
print(output)  # Output: 10