/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SDLRPCRequest.h>

@class NSNumber;

@interface SDLGetDTCs : SDLRPCRequest

@property (retain) NSNumber * ecuName; 
@property (retain) NSNumber * dtcMask; 
-(void)setEcuName:(NSNumber *)arg1 ;
-(NSNumber *)ecuName;
-(void)setDtcMask:(NSNumber *)arg1 ;
-(NSNumber *)dtcMask;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
@end

