//GF_Gauss


#include <stdio.h>

unsigned long long table_1[64] = {
	0x5F9DF81E5A2A6D63, 0x457AEBB93F84B35D, 0xF3C4AD6F45833579, 0x035E128B6600D6DB, 
	0x0DE6B3B2916459F9, 0xFB85F363AF8FD53F, 0xBD0DC3A09E827EB3, 0x6277D6EFFB3D6D4A, 
	0x2FF1BFD8B27EDE8C, 0x428FF27C05D3623D, 0x9F5BFE8DC8F84A82, 0x8AD2A244566216B9, 
	0xBF1429C3E57A58AE, 0x4E37FAFF8C08E4E9, 0xCF51FC44870C8EA6, 0xF574566F13B3BADC, 
	0x123A332BEEDA87B6, 0x0081334BC6BEBF49, 0x373AF5C2F22690F3, 0xF025158A06091DD1, 
	0xA8776C0F5461E5A1, 0x5A5007D58C717AD2, 0x0A518A82307B91D4, 0x62C5A8D594FC9897, 
	0x51A4B0E09FFE3A20, 0xC07E9F282D9968C0, 0xC7DBF52B0C84945A, 0x6729999A2E4C270D, 
	0x1FD5C31A38BD0B84, 0x439D9E3B6B0C6A26, 0x744BE198F530454D, 0x18796932620DB5EF, 
	0xEC1A565C6AAC2385, 0x716A86B3F369708F, 0xF0448A0702A62901, 0xA99B1120F15BC1C3, 
	0x9FAAACB9C03A2FB2, 0x123BE278AE9662A7, 0x8AA6115532852E75, 0x7847A7924BE634EC, 
	0x7EE70453538622FF, 0x0D0B47DC8983E536, 0xD973DC413295CA84, 0xE149AA2E53BF51FA, 
	0xB85E1774B49F2D81, 0xCC8AEFEE21568A8B, 0x35C2C56B761B1849, 0xEB5097F4065AF1D8, 
	0x9C52A9531D32BE32, 0x8B63880984143DC5, 0x9EC4F9E7286B6862, 0x330C2F6EC96DC225, 
	0xC2D0A135B810A5D0, 0xD733CF506DAE7378, 0x7EEE21E224E0AAA7, 0x5329853FF05E784B, 
	0xB74FACCF8EC66DD5, 0x1776A2FF34B8985D, 0x78CAF4D44D33B1A4, 0x99F145E5D8812C72, 
	0x34D744543EA52A7C, 0x9BAAD8D63E9AA00A, 0xA168B74C378E6593, 0x76C1ED8C0A00FDE4
};

unsigned long long table_2[64] = {
	0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0130592F7424020A, 0x0077B9D4A9D95E8D, 0x0D4B09C45B1B0216, 0x0D150697E42A8685, 
	0x0A109495254AB450, 0x084C1CF1E93527C8, 0x074610F0A22B865C, 0x0A033BEA72CCCA29, 
	0x0C19FA74386823E7, 0x0A50F4D395D2EFE0, 0x00749303D70F491A, 0x01029FB77BD47C33, 
	0x0E373AA3648ECB9D, 0x0F07C943B48B0412, 0x0EEF6D5D40735824, 0x0692C8E9BDD70C46, 
	0x03A61875616203E4, 0x056E700BC00B6C07, 0x0C88C0F743B3A05B, 0x0AAF7906E887DBE4, 
	0x03B6BFDA3415FD69, 0x0870D52E00B670EE, 0x0BC5E07BF6AAA49D, 0x0D6B753BA03228CC, 
	0x06BDDB080728DFAE, 0x0E63E58B1EADC29B, 0x0155552102A1CBD2, 0x02C88E83421836AF, 
	0x0A9AE3B0AC057EB3, 0x001A1A4EED520CD4, 0x03ADE647B4978A14, 0x041076124EC661FB, 
	0x09502FECC8CF2BB6, 0x0B5870300165F1EB, 0x0DB1EA51206F1D6D, 0x03442EE58E3AF995, 
	0x0323D6B9A01AE91C, 0x0E0705984854DE17, 0x0093A775CF1089D7, 0x09B55A3F0114A928, 
	0x067B84459600F920, 0x061F9BB65F56AA62, 0x0F6561543F8417BE, 0x004374003DB8F8CE, 
	0x0BB53C04DBD61110, 0x07868B59FA23852F, 0x05B351212A2326D5, 0x0FD51A8FF57794CB, 
	0x036CC105519B5886, 0x01F1AAEA1CF3D20C, 0x0DC7AAF5982B8A21, 0x08A30FB0819FAED8, 
	0x02F3AEB42D77AA63, 0x04ED06B53C8562A3, 0x0AA0AB4262E2A6BD, 0x0D509F9DA5CC03D4, 
	0x035CA87691DD4340, 0x0338E15E56BCD655, 0x0A6B600D86E0C51A, 0x07503B2995C0124E
};

unsigned char idx_table[256] = {
	0x18, 0x97, 0xb6, 0x51, 0xda, 0x8d, 0x34, 0x09, 0xcd, 0xa2, 0xeb, 0x45, 0x7f, 0x9b, 0xfe, 0x0d,
	0xb4, 0xae, 0x20, 0x92, 0xbe, 0xa3, 0x5e, 0x9f, 0x6f, 0xc5, 0xb1, 0x54, 0x2d, 0x33, 0x61, 0xdd,
	0x69, 0x63, 0x83, 0xb8, 0x66, 0xd4, 0x15, 0x4a, 0x07, 0x88, 0x59, 0x67, 0x16, 0x03, 0xcc, 0x5f,
	0xa6, 0xf5, 0xb5, 0xc0, 0xdb, 0xbc, 0xe4, 0xe8, 0x72, 0xc9, 0x02, 0x06, 0xd1, 0x24, 0xe1, 0x2f,
	0x5c, 0xff, 0x9c, 0x0c, 0xf9, 0xa4, 0x5b, 0x4c, 0x2e, 0x04, 0xde, 0x40, 0x89, 0xe5, 0x49, 0x98,
	0x55, 0x01, 0x91, 0xe3, 0x6c, 0x9e, 0x3f, 0x11, 0x85, 0xfc, 0x44, 0x95, 0xc8, 0x1a, 0x75, 0xab,
	0xea, 0xb7, 0x4b, 0xf6, 0xc3, 0xd0, 0x14, 0x7d, 0xc7, 0x2a, 0x00, 0xe6, 0xfa, 0x31, 0xca, 0x36,
	0x38, 0xd7, 0xf3, 0x52, 0x84, 0xdf, 0x22, 0x73, 0x57, 0x79, 0x30, 0x8e, 0x80, 0x1b, 0x7e, 0xcb,
	0x71, 0xfd, 0x6d, 0xd6, 0x2c, 0xd9, 0xbd, 0x42, 0xec, 0x68, 0x82, 0xbf, 0xc4, 0x28, 0xfb, 0xf1,
	0x0e, 0xa0, 0xe9, 0xe7, 0x6e, 0x47, 0x62, 0x46, 0x3e, 0xdc, 0xa8, 0x1e, 0x05, 0x17, 0x4d, 0xe2,
	0xf0, 0x5a, 0x90, 0xd5, 0x58, 0x25, 0x8b, 0x7a, 0xa9, 0x8c, 0xf8, 0x65, 0xa1, 0x0a, 0x21, 0x7c,
	0x3b, 0x23, 0x60, 0x32, 0x4f, 0x13, 0x3c, 0xb2, 0xe0, 0xa5, 0x10, 0xf4, 0xf2, 0x29, 0x9d, 0x9a,
	0x12, 0x74, 0x0b, 0x5d, 0x8f, 0x3a, 0xed, 0xaa, 0x19, 0x08, 0x48, 0x4e, 0xef, 0xbb, 0x93, 0xad,
	0x56, 0x50, 0xa7, 0x39, 0x26, 0xcf, 0x37, 0x96, 0xee, 0x64, 0xac, 0xba, 0x1f, 0x77, 0x99, 0x1c,
	0xb0, 0xd2, 0x27, 0x78, 0xb9, 0x76, 0x41, 0x35, 0x6a, 0x87, 0xd3, 0xce, 0x43, 0x7b, 0x2b, 0xaf,
	0x3d, 0x86, 0x81, 0xd8, 0xc2, 0x70, 0x8a, 0xf7, 0x0f, 0x53, 0xb3, 0xc1, 0x6b, 0x94, 0xc6, 0x1d
};

unsigned long long GF2_GaussElimination(unsigned long long table[64], unsigned long long x)
{
	int matrix[100][100];
	unsigned long long res = 0;

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++)
			matrix[i][j] = 0;
	}

	for (int i = 0; i < 64; i++) {
		for (int j = 0; j < 64; j++) {
			matrix[i][63 - j] = table[i] & 1;
			table[i] >>= 1;
		}
	}

	for (int i = 0; i < 64; i++)
	{
		matrix[63 - i][64] = x & 1;
		x >>= 1;
	}

	for (int i = 0; i < 65; i++) {
		int s = i;
		while(matrix[s][i] == 0 && s <= 65)
			s++;

		for (int j = 0; j < 65; j++) { 
			int temp = matrix[i][j];
			matrix[i][j] = matrix[s][j];
			matrix[s][j] = temp;
		}

		for (int j = 0; j < 64; j++) {
			if((j != i) && (matrix[j][i] == 1)) {
				for (int k = i - 1; k < 65; k++)
					matrix[j][k] = matrix[j][k] ^ matrix[i][k];
			}
		}
	}

	for (int i = 0; i < 64; i++){
		if(matrix[i][64] == 1){
			res |= (unsigned long long)1 << (63 - i);
		}
	}

	return res;
}

unsigned long long GF2_add(unsigned long long x, unsigned long long y)
{
	return x ^ y;
}

unsigned long long GF2_Mul(unsigned long long x, unsigned long long y, unsigned long long mod)
{
	unsigned long long mask;
	unsigned long long res;

	mask = (unsigned long long)1 << 63;
	
	while(!(mask & mod))
		mask >>= (unsigned long long)1;

	res = 0;
	
	while(y)
	{
		if(y & (unsigned long long)1)
			res ^= x;

		y >>= (unsigned long long)1;
		x <<= (unsigned long long)1;

		if(x & mask)
			x ^= mod;
	}

	return res;
}

unsigned long long GF2_Divide(unsigned long long x, unsigned long long y, unsigned long long *remainder)
{
	unsigned long long res = 0;
	int degree = 63;

	while(!(y & 0x8000000000000000)) {
		y <<= (unsigned long long)1;
		degree--;
	}

	for(int i = 63; i >= degree; i--) {
		if(x & ((unsigned long long)1 << i)) {
			res |= ((unsigned long long)1 << (i - degree));
			x ^= y;
		}
		y >>= (unsigned long long)1;
	}

	*remainder = x;

	return res;
}

unsigned long long GF2_EGCD(unsigned long long a, unsigned long long b, unsigned long long primitive, unsigned long long *r, unsigned long long *s)
{
	unsigned long long product;
	unsigned long long quotient;
	unsigned long long remainder;

	unsigned long long r_a = 1, s_a = 0;
	unsigned long long r_b = 0, s_b = 1;

	while(a && b) {
		if(a > b) {
			quotient = GF2_Divide(a, b, &remainder);
			a = remainder;

			product = GF2_Mul(quotient, r_b, primitive);
			r_a = GF2_add(r_a, product);

			product = GF2_Mul(quotient, s_b, primitive);
			s_a = GF2_add(s_a, product);
		}
		else {
			quotient = GF2_Divide(b, a, &remainder);
			b = remainder;

			product = GF2_Mul(quotient, r_a, primitive);
			r_b = GF2_add(r_b, product);

			product = GF2_Mul(quotient, s_a, primitive);
			s_b = GF2_add(s_b, product);
		}
	}

	if(a) {
		*s = s_a;
		*r = r_a;
		return a;
	}
	else {
		*s = s_b;
		*r = r_b;
		return b;
	}
}

unsigned long long GF2_Invert(unsigned long long a, unsigned long long primitive)
{
	unsigned long long r, s;
	GF2_EGCD(a, primitive, primitive, &r, &s);
	return r;
}

void replace_index(unsigned char* str, int len)
{
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 256; j++) {
			if (str[i] == idx_table[j]) {
				str[i] = j;
				break;
			}
		}
	}
}

int main(void) {
	unsigned char x1[9] = { 0, }, x2[9] = { 0, }, y1[9] = { 0, }, y2[9] = { 0, } ;

	*(unsigned long long *)x1 = GF2_GaussElimination(table_1, 0x7ba0f91cfc853fc2);
	*(unsigned long long *)x2 = GF2_GaussElimination(table_2, 0x0406c6fea7d1bbec);

	*(unsigned long long *)y1 = GF2_Invert(0x6051072104060829, 0xb348fccd93aea5a7);
	*(unsigned long long *)y2 = GF2_Invert(0xf00dc4f3beefc4f3, 0xb348fccd93aea5a7);

	replace_index(x1, 8);
	replace_index(x2, 8);
	replace_index(y1, 8);
	replace_index(y2, 8);

	printf("%s%s%s%s\n", x1, x2, y1, y2);
}
