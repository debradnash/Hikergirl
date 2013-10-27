/* Oct 26 Project 6  
   Develop kernel to display a message
   Debra Nash 
   */

int main()
{
	putInMemory(0xB000, 0x8140, 'H');
	putInMemory(0xB000, 0x8142, 'e');
	putInMemory(0xB000, 0x8144, 'l');
	putInMemory(0xB000, 0x8146, 'l');
	putInMemory(0xB000, 0x8148, 'o');
	
	putInMemory(0xB000, 0x8149, 0x7);
	putInMemory(0xB000, 0x8150, 'W');
	putInMemory(0xB000, 0x8152, 'o');
	putInMemory(0xB000, 0x8154, 'r');
	putInMemory(0xB000, 0x8156, 'l');
	putInMemory(0xB000, 0x8158, 'd');
	putInMemory(0xB000, 0x8159, 0x4);

	while (1) {
		/* to do */
	}
	return 0;
}
