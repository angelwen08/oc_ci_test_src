#import <Foundation/Foundation.h>
#import "AtomClassTest.h"

int main(int argc, const char * argv[])
{
	@autoreleasepool
	{
		AtomClassTest *atom = [[AtomClassTest alloc] init];
		NSLog(@"Atom chemical element name: %@", atom.chemicalElement);
	}
	return 0;
}