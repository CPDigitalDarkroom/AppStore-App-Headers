/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSURL, FBRestorableNavigationInfo;

@interface FBRestorableURL : FBValueObject <NSCopying, NSCoding> {

	NSURL* _url;
	FBRestorableNavigationInfo* _navigationInfo;

}

@property (nonatomic,copy,readonly) NSURL * url;                                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) FBRestorableNavigationInfo * navigationInfo;              //@synthesize navigationInfo=_navigationInfo - In the implementation block
-(FBRestorableNavigationInfo *)navigationInfo;
-(id)initWithUrl:(id)arg1 navigationInfo:(id)arg2 ;
-(NSURL *)url;
@end

