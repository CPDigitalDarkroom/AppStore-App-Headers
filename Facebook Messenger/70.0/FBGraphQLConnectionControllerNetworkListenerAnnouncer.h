/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBAnnouncerBase.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLConnectionControllerNetworkListener.h>

@class NSString;

@interface FBGraphQLConnectionControllerNetworkListenerAnnouncer : FBAnnouncerBase <FBGraphQLConnectionControllerNetworkListener>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)graphQLConnectionController:(id)arg1 didBeginNetworkLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didFailNetworkLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didReceiveEdgesFromNetworkLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didLoadEdgesFromNetworkLoad:(id)arg2 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

