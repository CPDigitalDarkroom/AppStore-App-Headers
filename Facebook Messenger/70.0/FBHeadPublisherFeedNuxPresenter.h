/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBNuxPresenter.h>

@protocol FBNuxDelegate;
@class FBUserSession, NSAttributedString, NSString, NSArray, NSDictionary;

@interface FBHeadPublisherFeedNuxPresenter : NSObject <FBNuxPresenter> {

	FBUserSession* _session;
	NSAttributedString* _defaultTitle;
	NSAttributedString* _emptyFeedTitle;
	char _feedIsEmpty;
	id<FBNuxDelegate> _nuxCoordinator;
	NSString* _nuxID;
	NSAttributedString* _title;
	NSArray* _triggerIDs;

}

@property (nonatomic,copy) NSString * nuxID;                                //@synthesize nuxID=_nuxID - In the implementation block
@property (nonatomic,copy) NSAttributedString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * triggerIDs;                            //@synthesize triggerIDs=_triggerIDs - In the implementation block
@property (assign,nonatomic) char feedIsEmpty;                              //@synthesize feedIsEmpty=_feedIsEmpty - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int nuxType; 
@property (assign,nonatomic) id<FBNuxDelegate> nuxCoordinator;              //@synthesize nuxCoordinator=_nuxCoordinator - In the implementation block
@property (nonatomic,readonly) NSString * nuxAnalyticsModule; 
@property (nonatomic,readonly) NSDictionary * extraLogData; 
@property (nonatomic,copy) id onClosedBlock; 
-(id<FBNuxDelegate>)nuxCoordinator;
-(id)viewControllerForPresentation;
-(NSString *)nuxID;
-(NSArray *)triggerIDs;
-(int)nuxStateForTriggerID:(id)arg1 triggerContext:(id)arg2 ;
-(int)nuxType;
-(void)setNuxCoordinator:(id<FBNuxDelegate>)arg1 ;
-(void)setNuxID:(NSString *)arg1 ;
-(void)setFeedIsEmpty:(char)arg1 ;
-(void)nuxDidAppear;
-(id)initWithSession:(id)arg1 nuxID:(id)arg2 title:(id)arg3 emptyFeedTitle:(id)arg4 triggerIDs:(id)arg5 ;
-(void)nuxWasDismissed;
-(char)feedIsEmpty;
-(void)setTriggerIDs:(NSArray *)arg1 ;
-(void)setTitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)title;
@end

