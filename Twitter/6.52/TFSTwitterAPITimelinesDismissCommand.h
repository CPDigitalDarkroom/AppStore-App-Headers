/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFSTwitterAPICommand.h>

@class NSArray, TFNTwitterSuggestsInfo, NSString;

@interface TFSTwitterAPITimelinesDismissCommand : TFSTwitterAPICommand {

	char _isUndo;
	NSArray* _statusIDNumbers;
	NSArray* _userIDNumbers;
	TFNTwitterSuggestsInfo* _suggestsInfo;
	NSString* _feedbackType;

}

@property (nonatomic,retain) NSArray * statusIDNumbers;                          //@synthesize statusIDNumbers=_statusIDNumbers - In the implementation block
@property (nonatomic,retain) NSArray * userIDNumbers;                            //@synthesize userIDNumbers=_userIDNumbers - In the implementation block
@property (nonatomic,retain) TFNTwitterSuggestsInfo * suggestsInfo;              //@synthesize suggestsInfo=_suggestsInfo - In the implementation block
@property (nonatomic,retain) NSString * feedbackType;                            //@synthesize feedbackType=_feedbackType - In the implementation block
@property (assign,nonatomic) char isUndo;                                        //@synthesize isUndo=_isUndo - In the implementation block
-(TFNTwitterSuggestsInfo *)suggestsInfo;
-(void)setSuggestsInfo:(TFNTwitterSuggestsInfo *)arg1 ;
-(id)initWithService:(id)arg1 accountID:(id)arg2 suggestsInfo:(id)arg3 feedbackType:(id)arg4 statusIDNumbers:(id)arg5 undo:(char)arg6 source:(unsigned)arg7 completionBlock:(/*^block*/id)arg8 ;
-(id)initWithService:(id)arg1 accountID:(id)arg2 suggestsInfo:(id)arg3 feedbackType:(id)arg4 userIDNumbers:(id)arg5 undo:(char)arg6 source:(unsigned)arg7 completionBlock:(/*^block*/id)arg8 ;
-(id)initWithService:(id)arg1 accountID:(id)arg2 scribeNetworkOperation:(id)arg3 source:(unsigned)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)requestWithPolling:(char)arg1 ;
-(NSArray *)statusIDNumbers;
-(NSArray *)userIDNumbers;
-(char)isUndo;
-(void)setStatusIDNumbers:(NSArray *)arg1 ;
-(void)setUserIDNumbers:(NSArray *)arg1 ;
-(void)setIsUndo:(char)arg1 ;
-(void)setFeedbackType:(NSString *)arg1 ;
-(NSString *)feedbackType;
@end

