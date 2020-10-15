This ID Validation console program is written in C++. It accepts 10 digits entered from the user and do the following input validations:

1. The ID must be 10 digits long.
2. No characters other than digits are allowed.
3. The ID cannot consist of 10 identical digits (e.g. 1111111111).

Test Data:

Empty String - False
4406283776 - True
123456 - False
12312312S1 - False
4277608332 - True
12312312312 - False
2222222222 - False
2185273756 - True
-875123699 - False
58751236.9 - False
5384036076 - True

If the entered ID is correct, then the program prints:

Thank you!
Your ID is accepted!