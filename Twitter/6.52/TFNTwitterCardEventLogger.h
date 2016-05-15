/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNTwitterCardEventLogger.h>

@protocol TFNTwitterCardEventLogger <NSObject>
@required
-(void)logEvent:(id)arg1;

@end


@protocol TFNTwitterCardScribeContextProvider;
@class TFNTwitterCardLogger, NSString;

@interface TFNTwitterCardEventLogger : NSObject <TFNTwitterCardEventLogger> {

	id<TFNTwitterCardScribeContextProvider> _cardScribeContextProvider;
	TFNTwitterCardLogger* _logger;

}

@property (nonatomic,retain) TFNTwitterCardLogger * logger;                                                    //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<TFNTwitterCardScribeContextProvider> cardScribeContextProvider;              //@synthesize cardScribeContextProvider=_cardScribeContextProvider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAccount:(id)arg1 cardScribeContextProvider:(id)arg2 configuration:(id)arg3 ;
-(id<TFNTwitterCardScribeContextProvider>)cardScribeContextProvider;
-(void)_logMediaOpenWithLogEvent:(id)arg1 ;
-(void)_logOffersRequestWithLogEvent:(id)arg1 ;
-(void)_logPurchaseRequestWithLogEvent:(id)arg1 ;
-(void)_logProfileOpenWithEvent:(id)arg1 ;
-(void)_logURLOpenWithLogEvent:(id)arg1 ;
-(void)_logAppStoreOpenWithLogEvent:(id)arg1 ;
-(void)_logAppStoreResponseWithLogEvent:(id)arg1 ;
-(void)_logAppOpenAttemptWithLogEvent:(id)arg1 ;
-(void)_logComposeTweetWithLogEvent:(id)arg1 ;
-(void)_logAppOpenedSuccessfullyWithLogEvent:(id)arg1 ;
-(void)_logTweetDetailsOpenWithLogEvent:(id)arg1 ;
-(void)_logImageActionOnSlideshowWithEvent:(id)arg1 ;
-(void)_logVideoURLOpenWithLogEvent:(id)arg1 ;
-(void)_logInlineVideoWithLogEvent:(id)arg1 ;
-(void)_logAuthenticatedWebViewRequestWithLogEvent:(id)arg1 ;
-(void)_logLeadSubmissionWithLogEvent:(id)arg1 ;
-(void)_logPollVoteWithLogEvent:(id)arg1 ;
-(void)_logConversationCardClickWithLogEvent:(id)arg1 ;
-(void)_logCustomerFeedbackCardLogEvent:(id)arg1 ;
-(void)_logMessageMeCardClickWithLogEvent:(id)arg1 ;
-(TFNTwitterCardLogger *)logger;
-(void)setLogger:(TFNTwitterCardLogger *)arg1 ;
-(id)init;
-(void)logEvent:(id)arg1 ;
@end

