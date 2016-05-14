/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNThreadPreviewingData;

@interface MNThreadPreviewingContext : FBValueObject <NSCopying> {

	MNThreadPreviewingData* _threadPreviewingData;
	CGRect _sourceRect;

}

@property (nonatomic,copy,readonly) MNThreadPreviewingData * threadPreviewingData;              //@synthesize threadPreviewingData=_threadPreviewingData - In the implementation block
@property (nonatomic,readonly) CGRect sourceRect;                                               //@synthesize sourceRect=_sourceRect - In the implementation block
-(id)initWithThreadPreviewingData:(id)arg1 sourceRect:(CGRect)arg2 ;
-(MNThreadPreviewingData *)threadPreviewingData;
-(CGRect)sourceRect;
@end

