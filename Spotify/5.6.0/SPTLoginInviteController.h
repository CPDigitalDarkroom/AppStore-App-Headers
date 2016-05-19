/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTLoginMarketSignupStatusRequestDelegate.h>
#import <Spotify/SPTLoginRegisterEmailRequestDelegate.h>
#import <Spotify/SPTLoginValidateCodeRequestDelegate.h>

@protocol SPTLoginInviteControllerDelegate;
@class NSString, SPTLoginMarketSignupStatusRequest, SPTLoginRegisterEmailRequest, SPTLoginValidateCodeRequest, SPTDataLoaderFactory;

@interface SPTLoginInviteController : NSObject <SPTLoginMarketSignupStatusRequestDelegate, SPTLoginRegisterEmailRequestDelegate, SPTLoginValidateCodeRequestDelegate> {

	char _shouldShowInviteInsteadOfSignup;
	char _invitePending;
	id<SPTLoginInviteControllerDelegate> _delegate;
	NSString* _inviteCode;
	int _codeLength;
	SPTLoginMarketSignupStatusRequest* _marketSignupStatusRequest;
	SPTLoginRegisterEmailRequest* _registerEmailRequest;
	SPTLoginValidateCodeRequest* _validateCodeRequest;
	SPTDataLoaderFactory* _dataLoaderFactory;
	NSString* _marketCountryCode;
	/*^block*/id _registerMailCallback;
	/*^block*/id _validateCodeCallback;

}

@property (assign,nonatomic,__weak) id<SPTLoginInviteControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char shouldShowInviteInsteadOfSignup;                                       //@synthesize shouldShowInviteInsteadOfSignup=_shouldShowInviteInsteadOfSignup - In the implementation block
@property (assign,getter=isInvitePending,nonatomic) char invitePending;                                  //@synthesize invitePending=_invitePending - In the implementation block
@property (nonatomic,copy) NSString * inviteCode;                                                        //@synthesize inviteCode=_inviteCode - In the implementation block
@property (assign,nonatomic) int codeLength;                                                             //@synthesize codeLength=_codeLength - In the implementation block
@property (nonatomic,retain) SPTLoginMarketSignupStatusRequest * marketSignupStatusRequest;              //@synthesize marketSignupStatusRequest=_marketSignupStatusRequest - In the implementation block
@property (nonatomic,retain) SPTLoginRegisterEmailRequest * registerEmailRequest;                        //@synthesize registerEmailRequest=_registerEmailRequest - In the implementation block
@property (nonatomic,retain) SPTLoginValidateCodeRequest * validateCodeRequest;                          //@synthesize validateCodeRequest=_validateCodeRequest - In the implementation block
@property (nonatomic,retain) SPTDataLoaderFactory * dataLoaderFactory;                                   //@synthesize dataLoaderFactory=_dataLoaderFactory - In the implementation block
@property (nonatomic,retain) NSString * marketCountryCode;                                               //@synthesize marketCountryCode=_marketCountryCode - In the implementation block
@property (nonatomic,copy) id registerMailCallback;                                                      //@synthesize registerMailCallback=_registerMailCallback - In the implementation block
@property (nonatomic,copy) id validateCodeCallback;                                                      //@synthesize validateCodeCallback=_validateCodeCallback - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataLoaderFactory:(SPTDataLoaderFactory *)arg1 ;
-(SPTDataLoaderFactory *)dataLoaderFactory;
-(id)initWithDataLoaderFactory:(id)arg1 ;
-(void)loadArchivedState;
-(void)updateInviteStatusFromRemoteService;
-(SPTLoginRegisterEmailRequest *)registerEmailRequest;
-(void)setRegisterMailCallback:(id)arg1 ;
-(id)provideInviteRequestEndpoint;
-(NSString *)marketCountryCode;
-(void)setRegisterEmailRequest:(SPTLoginRegisterEmailRequest *)arg1 ;
-(SPTLoginValidateCodeRequest *)validateCodeRequest;
-(void)setValidateCodeCallback:(id)arg1 ;
-(id)provideInviteValidationEndpoint;
-(void)setValidateCodeRequest:(SPTLoginValidateCodeRequest *)arg1 ;
-(void)setShouldShowInviteInsteadOfSignup:(char)arg1 ;
-(void)setInvitePending:(char)arg1 ;
-(void)archiveCurrentState;
-(SPTLoginMarketSignupStatusRequest *)marketSignupStatusRequest;
-(void)tryFetchingStatus;
-(id)provideMarketEndpoint;
-(void)setMarketSignupStatusRequest:(SPTLoginMarketSignupStatusRequest *)arg1 ;
-(id)selectBetweenDefaultEndpoint:(id)arg1 andOverrideEndpoint:(id)arg2 basedOnKey:(id)arg3 ;
-(id)userDefaultsForPersistentState;
-(void)loadArchivedState:(id)arg1 ;
-(void)archiveCurrentState:(id)arg1 ;
-(void)setMarketCountryCode:(NSString *)arg1 ;
-(id)registerMailCallback;
-(id)validateCodeCallback;
-(void)didValidateCodeWithRequest:(id)arg1 ;
-(void)validateCodeRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(void)userDidCompleteLogin;
-(void)setCodeLength:(int)arg1 ;
-(char)isInvitePending;
-(char)shouldShowInviteInsteadOfSignup;
-(void)userDidRequestInvitation;
-(void)registerEmail:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)marketSignupStatusRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(void)marketSignupStatusRequestDidSucceed:(id)arg1 withInviteOnlyMarketCountryCode:(id)arg2 ;
-(void)marketSignupStatusRequestDidSucceedForNormalMarket:(id)arg1 ;
-(void)userDidCompleteSignup;
-(void)didRegisterEmailWithRequest:(id)arg1 ;
-(void)registerEmailRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(int)codeLength;
-(void)validateCode:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<SPTLoginInviteControllerDelegate>)arg1 ;
-(id<SPTLoginInviteControllerDelegate>)delegate;
-(NSString *)inviteCode;
-(void)setInviteCode:(NSString *)arg1 ;
@end

