/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:25 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/GCKPB_PBGeneratedMessage.h>

@class NSString, GCKPB_PBMutableArray, GCKPB_PBServiceOptions;

@interface GCKPB_PBServiceDescriptorProto : GCKPB_PBGeneratedMessage

@property (assign,nonatomic) char hasName; 
@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) char hasMethodArray; 
@property (nonatomic,retain) GCKPB_PBMutableArray * methodArray; 
@property (assign,nonatomic) char hasStreamArray; 
@property (nonatomic,retain) GCKPB_PBMutableArray * streamArray; 
@property (assign,nonatomic) char hasOptions; 
@property (nonatomic,retain) GCKPB_PBServiceOptions * options; 
+(id)descriptor;
@end

