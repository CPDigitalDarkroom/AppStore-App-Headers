/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:25 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/GCKPB_PBGeneratedMessage.h>

@class NSString;

@interface GCKPB_NlpRepairStatus : GCKPB_PBGeneratedMessage

@property (assign,nonatomic) char hasRepairStatus; 
@property (assign,nonatomic) int repairStatus; 
@property (assign,nonatomic) char hasFlags; 
@property (assign,nonatomic) int flags; 
@property (assign,nonatomic) char hasVersionCode; 
@property (assign,nonatomic) int versionCode; 
@property (assign,nonatomic) char hasSignatureHash; 
@property (nonatomic,retain) NSString * signatureHash; 
@property (assign,nonatomic) char hasFoundTestKeys; 
@property (assign,nonatomic) char foundTestKeys; 
@property (assign,nonatomic) char hasHoldoffUntilBoot; 
@property (assign,nonatomic) char holdoffUntilBoot; 
@property (assign,nonatomic) char hasHoldoffUntilWipe; 
@property (assign,nonatomic) char holdoffUntilWipe; 
@property (assign,nonatomic) char hasHoldoffAfterInstall; 
@property (assign,nonatomic) char holdoffAfterInstall; 
@property (assign,nonatomic) char hasEnabled; 
@property (assign,nonatomic) int enabled; 
+(id)descriptor;
@end

