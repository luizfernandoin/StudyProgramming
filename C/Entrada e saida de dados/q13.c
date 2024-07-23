#include <stdio.h>

void main() {
    float kb, bits, bytes, mb, gb;

    printf("Digite o valor em KB: ");
    scanf("%f", &kb);

    bits = kb * 8192;
    bytes = kb * 1024;
    mb = kb / 1024;
    gb = mb / 1024;

    printf("%.2f KB equivalem a:\n", kb);
    printf("%.2f bits\n", bits);
    printf("%.2f bytes\n", bytes);
    printf("%.2f MB\n", mb);
    printf("%.2f GB\n", gb);
}
