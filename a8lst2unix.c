#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[]) {
	// printf("argc = %d\n", argc);
	
	if (argc<2) {
		printf("usage: %s Atari 8 Bit .LST files\n", argv[0]);
		return 0;
	}
	
	if ((strcmp(argv[1], "--help") && strcmp(argv[1], "-h"))==0) {
		printf("\nreplaces special Atari characters with codes of their keystrokes.\n");
		printf("Outputs names get a .txt added\n");
		printf("Files will be overwritten WITHOUT ANY WARNING!\n\n");
		return 0;
	}
	
	if ((strcmp(argv[1], "--version") && strcmp(argv[1], "-v"))==0) {
		printf("\n2022.07.15\n\n");
		return 0;
	}
	
	for(int i=1; i<argc; i++) {
		// printf("arg[%d]=\"%s\"\n", i, argv[i]);
		FILE *fp_in, *fp_out;
		
		fp_in=fopen(argv[i], "rb");
		
		if (fp_in==NULL) {
			printf("File \"%s\" not found\n", argv[i]);
		} else {
			char filename[20];
			int c;
			sprintf(filename, "%s.txt", argv[i]);
			fp_out=fopen(filename, "wb");
			
			if (!fp_out) {
				printf("cannot open \"%s\" for writing", filename);
				return -1;
			}
			
			while((c = getc(fp_in)) != EOF) {
				// printf("Read Char #%d\n", c);
				switch(c) {
//					case 32:
//						fputs("{Spacebar}", fp_out);
//						break;
					case 0: fputs("{Ctrl+,}", fp_out); break;
					case 1: fputs("{Ctrl+A}", fp_out); break;
					case 2: fputs("{Ctrl+B}", fp_out); break;
					case 3: fputs("{Ctrl+C}", fp_out); break;
					case 4: fputs("{Ctrl+D}", fp_out); break;
					case 5: fputs("{Ctrl+E}", fp_out); break;
					case 6: fputs("{Ctrl+F}", fp_out); break;
					case 7: fputs("{Ctrl+G}", fp_out); break;
					case 8: fputs("{Ctrl+H}", fp_out); break;
					case 9: fputs("{Ctrl+I}", fp_out); break;
					case 10: fputs("{Ctrl+J}", fp_out); break;
					case 11: fputs("{Ctrl+K}", fp_out); break;
					case 12: fputs("{Ctrl+L}", fp_out); break;
					case 13: fputs("{Ctrl+M}", fp_out); break;
					case 14: fputs("{Ctrl+N}", fp_out); break;
					case 15: fputs("{Ctrl+O}", fp_out); break;
					case 16: fputs("{Ctrl+P}", fp_out); break;
					case 17: fputs("{Ctrl+Q}", fp_out); break;
					case 18: fputs("{Ctrl+R}", fp_out); break;
					case 19: fputs("{Ctrl+S}", fp_out); break;
					case 20: fputs("{Ctrl+T}", fp_out); break;
					case 21: fputs("{Ctrl+U}", fp_out); break;
					case 22: fputs("{Ctrl+V}", fp_out); break;
					case 23: fputs("{Ctrl+W}", fp_out); break;
					case 24: fputs("{Ctrl+X}", fp_out); break;
					case 25: fputs("{Ctrl+Y}", fp_out); break;
					case 26: fputs("{Ctrl+Z}", fp_out); break;
					case 27: fputs("{ESC ESC}", fp_out); break;
					case 28: fputs("{ESC Ctrl+-}", fp_out); break;
					case 29: fputs("{ESC Ctrl+=}", fp_out); break;
					case 30: fputs("{ESC Ctrl++}", fp_out); break;
					case 31: fputs("{ESC Ctrl+*}", fp_out); break;

					case 96: fputs("{Ctrl+.}", fp_out); break;
					
					case 123: fputs("{Ctrl+;}", fp_out); break;
					case 125: fputs("{ESC Ctrl+<}", fp_out); break;
					case 126: fputs("{ESC Backspace}", fp_out); break;
					case 127: fputs("{ESC Tab}", fp_out); break;

					case 128: fputs("{Inv Ctrl+,}", fp_out); break;
					case 129: fputs("{Inv Ctrl+A}", fp_out); break;
					case 130: fputs("{Inv Ctrl+B}", fp_out); break;
					case 131: fputs("{Inv Ctrl+C}", fp_out); break;
					case 132: fputs("{Inv Ctrl+D}", fp_out); break;
					case 133: fputs("{Inv Ctrl+E}", fp_out); break;
					case 134: fputs("{Inv Ctrl+F}", fp_out); break;
					case 135: fputs("{Inv Ctrl+G}", fp_out); break;
					case 136: fputs("{Inv Ctrl+H}", fp_out); break;
					case 137: fputs("{Inv Ctrl+I}", fp_out); break;
					case 138: fputs("{Inv Ctrl+J}", fp_out); break;
					case 139: fputs("{Inv Ctrl+K}", fp_out); break;
					case 140: fputs("{Inv Ctrl+L}", fp_out); break;
					case 141: fputs("{Inv Ctrl+M}", fp_out); break;
					case 142: fputs("{Inv Ctrl+N}", fp_out); break;
					case 143: fputs("{Inv Ctrl+O}", fp_out); break;
					case 144: fputs("{Inv Ctrl+P}", fp_out); break;
					case 145: fputs("{Inv Ctrl+Q}", fp_out); break;
					case 146: fputs("{Inv Ctrl+R}", fp_out); break;
					case 147: fputs("{Inv Ctrl+S}", fp_out); break;
					case 148: fputs("{Inv Ctrl+T}", fp_out); break;
					case 149: fputs("{Inv Ctrl+U}", fp_out); break;
					case 150: fputs("{Inv Ctrl+V}", fp_out); break;
					case 151: fputs("{Inv Ctrl+W}", fp_out); break;
					case 152: fputs("{Inv Ctrl+X}", fp_out); break;
					case 153: fputs("{Inv Ctrl+Y}", fp_out); break;
					case 154: fputs("{Inv Ctrl+Z}", fp_out); break;

					case 155: fputs("\n", fp_out); break;

					case 156: fputs("{ESC Shift+Backspace}", fp_out); break;
					case 157: fputs("{ESC Shift+>}", fp_out); break;
					case 158: fputs("{ESC Ctrl+Tab}", fp_out); break;
					case 159: fputs("{ESC Shift+Tab}", fp_out); break;
					
					case 160: fputs("{ }", fp_out); break;
					case 161: fputs("{!}", fp_out); break;
					case 162: fputs("{\"}", fp_out); break;
					case 163: fputs("{#}", fp_out); break;
					case 164: fputs("{$}", fp_out); break;
					case 165: fputs("{%}", fp_out); break;
					case 166: fputs("{&}", fp_out); break;
					case 167: fputs("{'}", fp_out); break;
					case 168: fputs("{(}", fp_out); break;
					case 169: fputs("{)}", fp_out); break;
					case 170: fputs("{*}", fp_out); break;
					case 171: fputs("{+}", fp_out); break;
					case 172: fputs("{,}", fp_out); break;
					case 173: fputs("{-}", fp_out); break;
					case 174: fputs("{.}", fp_out); break;
					case 175: fputs("{/}", fp_out); break;
					case 176: fputs("{0}", fp_out); break;
					case 177: fputs("{1}", fp_out); break;
					case 178: fputs("{2}", fp_out); break;
					case 179: fputs("{3}", fp_out); break;
					case 180: fputs("{4}", fp_out); break;
					case 181: fputs("{5}", fp_out); break;
					case 182: fputs("{6}", fp_out); break;
					case 183: fputs("{7}", fp_out); break;
					case 184: fputs("{8}", fp_out); break;
					case 185: fputs("{9}", fp_out); break;
					case 186: fputs("{:}", fp_out); break;
					case 187: fputs("{;}", fp_out); break;
					case 188: fputs("{<}", fp_out); break;
					case 189: fputs("{=}", fp_out); break;
					case 190: fputs("{>}", fp_out); break;
					case 191: fputs("{?}", fp_out); break;
					case 192: fputs("{@}", fp_out); break;
					case 193: fputs("{A}", fp_out); break;
					case 194: fputs("{B}", fp_out); break;
					case 195: fputs("{C}", fp_out); break;
					case 196: fputs("{D}", fp_out); break;
					case 197: fputs("{E}", fp_out); break;
					case 198: fputs("{F}", fp_out); break;
					case 199: fputs("{G}", fp_out); break;
					case 200: fputs("{H}", fp_out); break;
					case 201: fputs("{I}", fp_out); break;
					case 202: fputs("{J}", fp_out); break;
					case 203: fputs("{K}", fp_out); break;
					case 204: fputs("{L}", fp_out); break;
					case 205: fputs("{M}", fp_out); break;
					case 206: fputs("{N}", fp_out); break;
					case 207: fputs("{O}", fp_out); break;
					case 208: fputs("{P}", fp_out); break;
					case 209: fputs("{Q}", fp_out); break;
					case 210: fputs("{R}", fp_out); break;
					case 211: fputs("{S}", fp_out); break;
					case 212: fputs("{T}", fp_out); break;
					case 213: fputs("{U}", fp_out); break;
					case 214: fputs("{V}", fp_out); break;
					case 215: fputs("{W}", fp_out); break;
					case 216: fputs("{X}", fp_out); break;
					case 217: fputs("{Y}", fp_out); break;
					case 218: fputs("{Z}", fp_out); break;
					case 219: fputs("{[}", fp_out); break;
					case 220: fputs("{\\}", fp_out); break;
					case 221: fputs("{]}", fp_out); break;
					case 222: fputs("{^}", fp_out); break;
					case 223: fputs("{_}", fp_out); break;
					case 224: fputs("{Inv Ctrl+.}", fp_out); break;
					case 225: fputs("{a}", fp_out); break;
					case 226: fputs("{b}", fp_out); break;
					case 227: fputs("{c}", fp_out); break;
					case 228: fputs("{d}", fp_out); break;
					case 229: fputs("{e}", fp_out); break;
					case 230: fputs("{f}", fp_out); break;
					case 231: fputs("{g}", fp_out); break;
					case 232: fputs("{h}", fp_out); break;
					case 233: fputs("{i}", fp_out); break;
					case 234: fputs("{j}", fp_out); break;
					case 235: fputs("{k}", fp_out); break;
					case 236: fputs("{l}", fp_out); break;
					case 237: fputs("{m}", fp_out); break;
					case 238: fputs("{n}", fp_out); break;
					case 239: fputs("{o}", fp_out); break;
					case 240: fputs("{p}", fp_out); break;
					case 241: fputs("{q}", fp_out); break;
					case 242: fputs("{r}", fp_out); break;
					case 243: fputs("{s}", fp_out); break;
					case 244: fputs("{t}", fp_out); break;
					case 245: fputs("{u}", fp_out); break;
					case 246: fputs("{v}", fp_out); break;
					case 247: fputs("{w}", fp_out); break;
					case 248: fputs("{x}", fp_out); break;
					case 249: fputs("{y}", fp_out); break;
					case 250: fputs("{z}", fp_out); break;
					case 251: fputs("{Inv Ctrl+;}", fp_out); break;
					case 252: fputs("{|}", fp_out); break;
					case 253: fputs("{ESC Ctrl+2}", fp_out); break;
					case 254: fputs("{ESC Ctrl+Backspace}", fp_out); break;
					case 255: fputs("{ESC Ctrl+>}", fp_out); break;

					default:
						// printf("writing default value of #%d\n", c);
						fputc(c, fp_out);
				}
			}
			
			fclose(fp_out);
			fclose(fp_in);
		}
	}
	
	return 0;
}
