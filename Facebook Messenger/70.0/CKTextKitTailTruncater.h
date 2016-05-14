/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/CKTextKitTruncating.h>

@class CKTextKitContext, NSAttributedString, NSCharacterSet, NSString;

@interface CKTextKitTailTruncater : NSObject <CKTextKitTruncating> {

	CKTextKitContext* _context;
	NSAttributedString* _truncationAttributedString;
	NSCharacterSet* _avoidTailTruncationSet;
	CGSize _constrainedSize;
	vector<_NSRange, std::__1::allocator<_NSRange> >* _visibleRanges;
	CGRect _truncationStringRect;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) vector<_NSRange visibleRanges;              //@synthesize visibleRanges=_visibleRanges - In the implementation block
@property (nonatomic,readonly) CGRect truncationStringRect;                //@synthesize truncationStringRect=_truncationStringRect - In the implementation block
-(id)initWithContext:(id)arg1 truncationAttributedString:(id)arg2 avoidTailTruncationSet:(id)arg3 constrainedSize:(CGSize)arg4 ;
-(vector<_NSRange)visibleRanges;
-(void)_truncate;
-(unsigned)_findTruncationInsertionPointAtOrBeforeCharacterIndex:(unsigned)arg1 layoutManager:(id)arg2 textStorage:(id)arg3 ;
-(unsigned)_calculateCharacterIndexBeforeTruncationMessage:(id)arg1 textStorage:(id)arg2 textContainer:(id)arg3 ;
-(CGRect)truncationStringRect;
@end

