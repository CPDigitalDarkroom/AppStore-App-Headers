/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNSearchResultsSection : FBValueObject <NSCopying> {

	char _hasPendingRequest;
	NSArray* _rows;
	int _originalSection;

}

@property (nonatomic,readonly) char hasPendingRequest;              //@synthesize hasPendingRequest=_hasPendingRequest - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rows;                 //@synthesize rows=_rows - In the implementation block
@property (nonatomic,readonly) int originalSection;                 //@synthesize originalSection=_originalSection - In the implementation block
-(id)initWithHasPendingRequest:(char)arg1 rows:(id)arg2 originalSection:(int)arg3 ;
-(char)hasPendingRequest;
-(int)originalSection;
-(NSArray *)rows;
@end

