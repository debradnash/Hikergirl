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
	putInMemory(0xB000, 0x8141, 0x7);

	while (1) {
		/* to do */
	}
	return 0;
}
