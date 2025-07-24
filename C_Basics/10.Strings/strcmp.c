/*
Compares two strings lexicographically and returns an integer based on the comparison.
*/

#include <stdio.h>
#include <string.h>

int main() {
  int comparisonResult;

  // "apple" vs "banana"
  comparisonResult = strcmp("apple", "banana");
  printf("Comparing 'apple' with 'banana': %d\n", comparisonResult);
  // "a" < "b" → result will be negative

  // "cherry" vs "banana"
  comparisonResult = strcmp("cherry", "banana");
  printf("Comparing 'cherry' with 'banana': %d\n", comparisonResult);
  // "c" > "b" → result will be positive

  // "date" vs "date"
  comparisonResult = strcmp("date", "date");
  printf("Comparing 'date' with 'date': %d\n", comparisonResult);
  // exact match → result will be 0

  return 0;
}

/*
Concept:
Lexicographical = Alphabetical, based on character-by-character comparison using ASCII values.

strcmp(str1, str2) — How it works:
It compares two strings character by character based on their ASCII values:

Returns 0 if both strings are equal.
Returns < 0 if str1 is less than str2 (i.e., comes before it alphabetically).
Returns > 0 if str1 is greater than str2 (i.e., comes after it alphabetically).

ASCII Value Reference (for first characters):
'a' = 97
'b' = 98
'c' = 99
'd' = 100
So:

'a' < 'b' → "apple" < "banana"
'c' > 'b' → "cherry" > "banana"

When to Use strcmp()?
Use it when you need to:

Sort strings alphabetically
Check if two strings are equal (strcmp(str1, str2) == 0)
Perform case-sensitive comparison
*/

/*
Output:

Comparing 'apple' with 'banana': -1 (first string(apple) come first)
Comparing 'cherry' with 'banana':1 (second string(banana) come first)
Comparing 'date' with 'date': 0 (Both string is same)
*/

/*
Lexicographically means dictionary order — the same way words are ordered in a dictionary.
✅ In simple terms:
You compare one character at a time from left to right.
Use ASCII values (numerical codes of characters) to decide which character is "smaller" or "greater".
The first difference determines the result.


"apple" vs "banana"
'a' = 97, 'b' = 98
→ Since 'a' < 'b', "apple" comes **before** "banana"

"dog" vs "door"
Compare: d == d, o == o, g < o → "dog" < "door"

"cat" vs "catalog"
→ First 3 letters match (c-a-t), but "cat" ends first.
→ Shorter string comes first: "cat" < "catalog"


Lexicographic Order (with some sample words):

| Word 1  | Word 2   | Result             |
| ------- | -------- | ------------------ |
| "apple" | "banana" | "apple" < "banana" |
| "zebra" | "apple"  | "zebra" > "apple"  |
| "bat"   | "batch"  | "bat" < "batch"    |
| "car"   | "car"    | equal (==)         |

*/