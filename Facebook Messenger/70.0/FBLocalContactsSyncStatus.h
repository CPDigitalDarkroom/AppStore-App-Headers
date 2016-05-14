/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBLocalContactsSyncStatus : FBValueObject <NSCopying> {

	NSArray* _uploadedContacts;
	NSArray* _matchedContactIds;

}

@property (nonatomic,copy,readonly) NSArray * uploadedContacts;               //@synthesize uploadedContacts=_uploadedContacts - In the implementation block
@property (nonatomic,copy,readonly) NSArray * matchedContactIds;              //@synthesize matchedContactIds=_matchedContactIds - In the implementation block
-(NSArray *)uploadedContacts;
-(NSArray *)matchedContactIds;
-(id)initWithUploadedContacts:(id)arg1 matchedContactIds:(id)arg2 ;
@end

