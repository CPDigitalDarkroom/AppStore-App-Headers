/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:40 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBOmnistoreCollectionName, NSString;

@interface FBOmnistoreSubscriptionParams : FBValueObject <NSCopying> {

	FBOmnistoreCollectionName* _collectionName;
	NSString* _collectionParamsString;
	NSString* _idl;
	unsigned _initialGlobalVersionId;

}

@property (nonatomic,copy,readonly) FBOmnistoreCollectionName * collectionName;              //@synthesize collectionName=_collectionName - In the implementation block
@property (nonatomic,copy,readonly) NSString * collectionParamsString;                       //@synthesize collectionParamsString=_collectionParamsString - In the implementation block
@property (nonatomic,copy,readonly) NSString * idl;                                          //@synthesize idl=_idl - In the implementation block
@property (nonatomic,readonly) unsigned initialGlobalVersionId;                              //@synthesize initialGlobalVersionId=_initialGlobalVersionId - In the implementation block
-(id)initWithCollectionName:(id)arg1 collectionParamsString:(id)arg2 idl:(id)arg3 ;
-(id)initWithCollectionName:(id)arg1 collectionParamsString:(id)arg2 idl:(id)arg3 initialGlobalVersionId:(unsigned)arg4 ;
-(NSString *)collectionParamsString;
-(NSString *)idl;
-(unsigned)initialGlobalVersionId;
-(FBOmnistoreCollectionName *)collectionName;
@end

