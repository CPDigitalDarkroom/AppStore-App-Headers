/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SDLRPCRequest.h>

@class NSNumber, SDLMenuParams, NSMutableArray, SDLImage;

@interface SDLAddCommand : SDLRPCRequest

@property (retain) NSNumber * cmdID; 
@property (retain) SDLMenuParams * menuParams; 
@property (retain) NSMutableArray * vrCommands; 
@property (retain) SDLImage * cmdIcon; 
-(void)setVrCommands:(NSMutableArray *)arg1 ;
-(NSMutableArray *)vrCommands;
-(void)setMenuParams:(SDLMenuParams *)arg1 ;
-(SDLMenuParams *)menuParams;
-(void)setCmdIcon:(SDLImage *)arg1 ;
-(SDLImage *)cmdIcon;
-(void)setCmdID:(NSNumber *)arg1 ;
-(NSNumber *)cmdID;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
@end

