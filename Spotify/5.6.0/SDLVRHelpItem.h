/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SDLRPCStruct.h>

@class NSString, SDLImage, NSNumber;

@interface SDLVRHelpItem : SDLRPCStruct

@property (retain) NSString * text; 
@property (retain) SDLImage * image; 
@property (retain) NSNumber * position; 
-(void)setImage:(SDLImage *)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(SDLImage *)image;
-(void)setPosition:(NSNumber *)arg1 ;
-(NSNumber *)position;
@end

