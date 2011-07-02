#import <Foundation/Foundation.h>
#import "TBXML.h"
#import "TBXMLElementEx.h"

@interface TBXMLEx : NSObject {
	TBXML *tbxml;
	TBXMLElementEx *rootElement;
}

// Creates an autoreleased parser
+(TBXMLEx *) parserWithXML:(NSString *) xml;

-(TBXMLElementEx *) rootElement;

@end

