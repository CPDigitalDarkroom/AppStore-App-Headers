/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/FBSDKErrorRecoveryAttempting.h>

@class NSString;

@interface FBSDKErrorRecoveryAttempter : NSObject <FBSDKErrorRecoveryAttempting>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recoveryAttempterFromConfiguration:(id)arg1 ;
-(void)completeRecovery:(char)arg1 delegate:(id)arg2 didRecoverSelector:(SEL)arg3 contextInfo:(void*)arg4 ;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
@end

