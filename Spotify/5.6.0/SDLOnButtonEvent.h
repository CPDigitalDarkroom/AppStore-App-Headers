/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SDLRPCNotification.h>

@class SDLButtonName, SDLButtonEventMode, NSNumber;

@interface SDLOnButtonEvent : SDLRPCNotification

@property (retain) SDLButtonName * buttonName; 
@property (retain) SDLButtonEventMode * buttonEventMode; 
@property (retain) NSNumber * customButtonID; 
-(void)setButtonName:(SDLButtonName *)arg1 ;
-(SDLButtonName *)buttonName;
-(void)setCustomButtonID:(NSNumber *)arg1 ;
-(NSNumber *)customButtonID;
-(void)setButtonEventMode:(SDLButtonEventMode *)arg1 ;
-(SDLButtonEventMode *)buttonEventMode;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
@end

