/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:25 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/GCKPB_PBGeneratedMessage.h>

@class NSString;

@interface GCKPB_CheckIabPromoData : GCKPB_PBGeneratedMessage

@property (assign,nonatomic) char hasReportedResult; 
@property (assign,nonatomic) int reportedResult; 
@property (assign,nonatomic) char hasActualResult; 
@property (assign,nonatomic) int actualResult; 
@property (assign,nonatomic) char hasCallingPackage; 
@property (nonatomic,retain) NSString * callingPackage; 
+(id)descriptor;
@end

