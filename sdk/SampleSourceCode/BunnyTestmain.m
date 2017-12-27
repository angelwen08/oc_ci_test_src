#import <Foundation/Foundation.h>
#import "BunnyTestAtom.h"

int main(int argc, const char * argv[])
{
	@autoreleasepool
	{
		BunnyTestAtom *atom = [[BunnyTestAtom alloc] init];
		NSLog(@"Atom chemical element name: %@", atom.chemicalElement);
	}
	return 0;
}