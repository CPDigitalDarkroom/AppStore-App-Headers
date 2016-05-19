/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPTSmartDeviceLinkControllerDelegate <NSObject>
@required
-(void)smartDeviceLinkWasConnected:(id)arg1;
-(void)smartDeviceLinkWasDisconnected:(id)arg1;
-(void)smartDeviceLinkDidBecomeForeground:(id)arg1;
-(void)smartDeviceLinkDidBecomeBackground:(id)arg1;
-(void)smartDeviceLinkDidBecomeLimited:(id)arg1;
-(void)smartDeviceLinkDidBecomeIdle:(id)arg1;
-(void)smartDeviceLink:(id)arg1 didEncounterError:(id)arg2;
-(void)smartDeviceLink:(id)arg1 pressedButton:(int)arg2 customButtonId:(int)arg3;
-(void)smartDeviceLink:(id)arg1 longPressedButton:(int)arg2 customButtonId:(int)arg3;
-(void)smartDeviceLink:(id)arg1 buttonDown:(int)arg2;
-(void)smartDeviceLink:(id)arg1 buttonUp:(int)arg2;
-(void)smartDeviceLink:(id)arg1 didTriggerCommandWithId:(id)arg2 triggeredByVoice:(char)arg3;

@end

