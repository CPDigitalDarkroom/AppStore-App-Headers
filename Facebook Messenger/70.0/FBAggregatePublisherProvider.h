/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPublisherProvider.h>

@protocol FBPublisherProvider;
@class NSMutableDictionary, NSString;

@interface FBAggregatePublisherProvider : NSObject <FBPublisherProvider> {

	NSMutableDictionary* _publisherProvidersByIdentifier;
	id<FBPublisherProvider> _registeredProvider;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)publisherForIdentifier:(id)arg1 publication:(id)arg2 publisherManager:(id)arg3 mediaUploadItemManager:(id)arg4 logger:(id)arg5 session:(id)arg6 listener:(id)arg7 ;
-(void)registerPublisherProvider:(id)arg1 forIdentifier:(id)arg2 ;
-(id)init;
@end

