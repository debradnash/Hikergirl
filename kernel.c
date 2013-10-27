/* Oct 26 Project 6  
   Develop kernel to display a message
   Debra Nash 
   */

int main()
{
	putInMemory(0xB000, 0x8140, 'H');
	putInMemory(0xB000, 0x8141, 0x7);

	while (1) {
		/* to do */
	}
	return 0;
}
