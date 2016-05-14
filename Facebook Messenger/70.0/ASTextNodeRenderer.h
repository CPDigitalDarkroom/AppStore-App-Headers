/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@class NSAttributedString, ASTextNodeWordKerner, NSLayoutManager, NSTextStorage, NSTextContainer, NSArray;

@interface ASTextNodeRenderer : NSObject {

	CGSize _constrainedSize;
	CGSize _calculatedSize;
	NSAttributedString* _attributedString;
	NSAttributedString* _truncationString;
	int _truncationMode;
	unsigned _maximumLineCount;
	NSRange _truncationCharacterRange;
	NSRange _visibleRange;
	ASTextNodeWordKerner* _wordKerner;
	RecursiveMutex _textKitLock;
	NSLayoutManager* _layoutManager;
	NSTextStorage* _textStorage;
	NSTextContainer* _textContainer;
	NSArray* _exclusionPaths;

}
+(id)_truncationCharacterSet;
-(CGRect)frameForTextRange:(NSRange)arg1 ;
-(id)initWithAttributedString:(id)arg1 truncationString:(id)arg2 truncationMode:(int)arg3 maximumLineCount:(unsigned)arg4 exclusionPaths:(id)arg5 constrainedSize:(CGSize)arg6 ;
-(void)enumerateTextIndexesAtPosition:(CGPoint)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)rectsForTextRange:(NSRange)arg1 measureOption:(unsigned)arg2 ;
-(CGRect)trailingRect;
-(NSRange)truncationStringCharacterRange;
-(void)_initializeTextKitComponentsWithAttributedString:(id)arg1 ;
-(void)_calculateSize;
-(unsigned)_calculateCharacterIndexBeforeTruncationMessage;
-(void)_initializeTextKitComponentsIfNeeded;
-(CGRect)_rectForGlyphAtIndex:(unsigned)arg1 measureOption:(unsigned)arg2 ;
-(unsigned)_findTruncationInsertionPointAtOrBeforeCharacterIndex:(unsigned)arg1 ;
-(id)initWithAttributedString:(id)arg1 truncationString:(id)arg2 truncationMode:(int)arg3 maximumLineCount:(unsigned)arg4 constrainedSize:(CGSize)arg5 ;
-(unsigned)lineCount;
-(CGSize)size;
-(void)_invalidateLayout;
-(NSRange)visibleRange;
-(void)drawInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
@end

