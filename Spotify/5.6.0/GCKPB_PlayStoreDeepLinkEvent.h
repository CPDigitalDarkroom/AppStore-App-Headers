/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:25 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/GCKPB_PBGeneratedMessage.h>

@class NSString, NSData;

@interface GCKPB_PlayStoreDeepLinkEvent : GCKPB_PBGeneratedMessage

@property (assign,nonatomic) char hasExternalUrl; 
@property (nonatomic,retain) NSString * externalUrl; 
@property (assign,nonatomic) char hasResolvedType; 
@property (assign,nonatomic) int resolvedType; 
@property (assign,nonatomic) char hasPackageName; 
@property (nonatomic,retain) NSString * packageName; 
@property (assign,nonatomic) char hasMinVersion; 
@property (assign,nonatomic) int minVersion; 
@property (assign,nonatomic) char hasNewEnough; 
@property (assign,nonatomic) char newEnough; 
@property (assign,nonatomic) char hasCanResolve; 
@property (assign,nonatomic) char canResolve; 
@property (assign,nonatomic) char hasServerLogsCookie; 
@property (nonatomic,retain) NSData * serverLogsCookie; 
@property (assign,nonatomic) char hasExternalReferrer; 
@property (nonatomic,retain) NSString * externalReferrer; 
@property (assign,nonatomic) char hasReferrerPackage; 
@property (nonatomic,retain) NSString * referrerPackage; 
+(id)descriptor;
@end

