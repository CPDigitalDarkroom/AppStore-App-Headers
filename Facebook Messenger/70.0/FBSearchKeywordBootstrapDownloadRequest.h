/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLDownloadRequest.h>

@interface FBSearchKeywordBootstrapDownloadRequest : FBGraphQLDownloadRequest {

	unsigned _maxResultCount;

}

@property (nonatomic,readonly) unsigned maxResultCount;              //@synthesize maxResultCount=_maxResultCount - In the implementation block
-(id)newQuery;
-(id)initWithUserID:(id)arg1 maxResultCount:(unsigned)arg2 callbackPerformer:(id)arg3 ;
-(unsigned)maxResultCount;
@end

