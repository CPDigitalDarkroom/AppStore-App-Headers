/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:25 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/GCKPB_PBGeneratedMessage.h>

@class GCKPB_PBMutableArray;

@interface GCKPB_PBServiceOptions : GCKPB_PBGeneratedMessage

@property (assign,nonatomic) char hasMulticastStub; 
@property (assign,nonatomic) char multicastStub; 
@property (assign,nonatomic) char hasFailureDetectionDelay; 
@property (assign,nonatomic) double failureDetectionDelay; 
@property (assign,nonatomic) char hasDeprecated; 
@property (assign,nonatomic) char deprecated; 
@property (assign,nonatomic) char hasUninterpretedOptionArray; 
@property (nonatomic,retain) GCKPB_PBMutableArray * uninterpretedOptionArray; 
+(id)descriptor;
@end

