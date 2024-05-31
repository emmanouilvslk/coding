# Given encoded string
encoded_string = "灩捯䍔䙻ㄶ形楴獟楮獴㌴摟潦弸弲㘶㠴挲ぽ"

# Decode function
def decode(encoded_string):
    decoded_chars = []
    for char in encoded_string:
        # Get the unicode code point of the character
        code_point = ord(char)
        # Split it into two 8-bit values
        high_byte = (code_point >> 8) & 0xFF
        low_byte = code_point & 0xFF
        # Convert these bytes back to characters
        decoded_chars.append(chr(high_byte))
        decoded_chars.append(chr(low_byte))
    return ''.join(decoded_chars)

# Decode the string
decoded_string = decode(encoded_string)
print(decoded_string)