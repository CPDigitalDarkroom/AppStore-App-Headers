/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SDLRPCNotification.h>

@class SDLKeyboardEvent, NSString;

@interface SDLOnKeyboardInput : SDLRPCNotification

@property (retain) SDLKeyboardEvent * event; 
@property (retain) NSString * data; 
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)data;
-(void)setData:(NSString *)arg1 ;
-(SDLKeyboardEvent *)event;
-(void)setEvent:(SDLKeyboardEvent *)arg1 ;
@end

