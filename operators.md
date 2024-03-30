# Arithemetic Operators

Binary + - \* / % // needs two operands
Urinary ++ -- // needs one operands

postincrement & postdecrement // a++
preincrement & predecrement // --b

# How to solve "2 \* 3 + 1 / 5"?

Generally, humans follow BODMAS rule but computer doesn't.

# So what to do now?

Computer created precedence & associativity rule where

## Precedence tells {\* / %} >> {+ -}

what if \* and / comes in eqn.

## Associativity rule is followed where "Left to right" rule followed and it varies from compiler to compiler.

e.g. 2 \* 3 - 4 / 2 == 6 - 4 / 2 == 6 - 2 == 4

# Comparison Operators

## {==, >, <, >=, <=, !=} // returns bool value

## Precedence: { >, <, >=, <= } > { ==, != }

## Associativity: Left to right

e.g.

4 == 3 // false
2 == 2 // true
2 > 3 // 0
4 > 3 // 1
4 >= 3 // 1
2 <= 3 // 1

5 > 4 > 3 // false

how?
because of precedence

5 > 4 > 3 // first 5, 4 comparison converted as 1 cuz of true condition then
1 > 3 // false

e.g.

5 > 4 < 3 == 2
1 < 3 == 2
1 == 2
0

e.g.

3 > 4 > 5 != 1
0 > 5 != 1
0 != 1
1

# Logical Operators

Used for checking two or more conditions.

{ &&, ||, !} // returns bool value

&& // both true
|| // anyone true
! // reverse, need only one operand

e.g.

10 && 3 // true cuz 10 will be treated like 1
0 && 3 // true cuz 0 will be treated like 0

15 || 0 // true
0 || 0 // false

!10 // 0
!0 // 1

# Bitwise Operators

Precedence: { <<, >> } > { &, |, ^, ~}
Associativity: "Left to right"

2 & 3 // convert val to bin, then compare

 10
 11
 --
 10 // == 2

2 | 3

 10
 11
 --
 11 // == 3

 ^ // if same, returns 0 otherwise 1

 e.g. 0 0 // 0
 e.g. 0 1 // 1
 e.g. 1 0 // 1
 e.g. 1 1 // 0

<< // left shift

num * 2 ^ x

6 << 1 // shift 6 by 1

  1 1 0
 / / /
1 1 0 

  1 1 0
 / / /
1 1 0 0

1 1 0 0 // == 12

>> // left shift

num / 2 ^ x

~ 5

101
010 // -6

Assignment Operators

{ =, *=, +=, -=, /=, %= }

## What if, given 5 ^ 10 * 5 - 3 >> 7 * 4 > 8 != 5 == 7

All types of operators are given in a ques.

# Facts

int < float < double

means if two operands are given 12.4 & 4, if we divides 12.4 by 4 then based on greater data types, output will be resulted of that DT.

e.g. 12.4 / 4 means 12.4 > 4 means float > int == output will be float
e.g. 12 / 4 means 12 > 4 means int > int == output will be int
