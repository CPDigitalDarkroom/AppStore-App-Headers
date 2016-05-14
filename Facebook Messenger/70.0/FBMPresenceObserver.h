/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMQTTPresenceUpdateListening.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>

@class MNMQTTPresenceUpdateListeningAnnouncer, NSString;

@interface FBMPresenceObserver : NSObject <MNMQTTPresenceUpdateListening, FBSessionClassProvidable> {

	MNMQTTPresenceUpdateListeningAnnouncer* _announcer;
	char _presenceLoaded;

}

@property (nonatomic,readonly) char presenceLoaded;                 //@synthesize presenceLoaded=_presenceLoaded - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(char)presenceLoaded;
-(void)didReceievePresenceUpdateWithValues:(id)arg1 wasFull:(char)arg2 ;
-(void)dealloc;
@end

