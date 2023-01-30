# Bit Manipulation (optional chapter)

## O.1 Bit flags and bit manipulation via std::bitset
Use std::bitset<> from the bitset library to define a set of bit flags. Or you could use an unsigned integer of the appropriate size. Bit manipulation is one of the few times when you should unambiguously use unsigned integers (or std::bitset).
Typically number bits from right to left, starting with 0; for example, 76543210 being the bit position for a sequence of 8 bits.
std::bitset provides test() (query if 1 or 0), set() (turn bit on), reset() (turn bit off), and flip() (0->1 or 1->0) functions which are useful for doing bit manipulation.
Size of std::bitset is usually the number of bytes needed to hold the bits, rounded up to the nearest sizeof(size_t), which is 4 bytes on 32-bit machines, and 8-bytes on 64-bit machines. So it's best for convenience and not memory savings.

## O.2 Bitwise operators
Use bitwise operators with unsigned operands or std::bitset to avoid surprises.
Bitwise not is ~, bitwise and is &, bitwise or is |, bitwise XOR is ^. There are also bitwise assignment operators, like <<= or ^=.

## O.3 Bit manipulation with bitwise operators and bit masks
In C++14 or later, can define a bitmask with binary literals with prefix 0b. In C++11 or earlier, use hex or the left-shift operator (i.e. 1 << 7)).
Use bitwise AND to check if a bit is on or off. Use OR to turn on the bit.
Bit flags are most useful in programs where you have many identical flag variables, or if you want to pass many options into a function.

## O.4 Converting between binary and decimal
One method for converting decimal to binary: continually divide by 2 and write down the remainders. The binary number is constructed at the end from the remainders, from the bottom up.
Two's complement: for negative signed numbers, represent in binary as the bitwise inverse of the positive number, plus 1. The reason we add one is to prevent two representations of 0. By adding 1, 1111 1111 intentionally overflows and becomes 0000 0000. It also simplifies some of the internal logic needed to do arithmetic with negative numbers. To convert two's complement to decimal, look at the sign bit and if it's 1, invert the bits and add 1 and convert to decimal. Then make that number negative, since the sign bit was originally negative.
