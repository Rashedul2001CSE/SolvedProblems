import pyperclip


def transform_string(input_string):
    # Remove periods
    no_periods = input_string.replace('.', '')

    # Split the string by spaces
    words = no_periods.split()

    # Capitalize the first letter of each word (except the first word)
    capitalized_words = [words[0]] + [word.capitalize() for word in words[1:]]

    # Join the words with underscores
    result_string = '_'.join(capitalized_words)

    return result_string


# Get user input
input_string = input("Enter a string: ")

# Transform the string
result = transform_string(input_string)

# Copy the result to the clipboard
pyperclip.copy(result)

# Print a message indicating that the output is copied
print("Transformed string copied to clipboard:", result)
