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