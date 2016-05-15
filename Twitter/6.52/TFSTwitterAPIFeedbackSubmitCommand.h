/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFSTwitterAPICommand.h>

@class NSString, NSNumber;

@interface TFSTwitterAPIFeedbackSubmitCommand : TFSTwitterAPICommand {

	NSString* _feedbackID;
	NSNumber* _score;
	NSString* _text;

}

@property (nonatomic,retain) NSString * feedbackID;              //@synthesize feedbackID=_feedbackID - In the implementation block
@property (nonatomic,retain) NSNumber * score;                   //@synthesize score=_score - In the implementation block
@property (nonatomic,retain) NSString * text;                    //@synthesize text=_text - In the implementation block
-(void)setFeedbackID:(NSString *)arg1 ;
-(NSString *)feedbackID;
-(id)initWithService:(id)arg1 accountID:(id)arg2 feedbackID:(id)arg3 score:(id)arg4 text:(id)arg5 source:(unsigned)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)requestWithPolling:(char)arg1 ;
-(void)completeWithModel:(id)arg1 error:(id)arg2 ;
-(NSNumber *)score;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setScore:(NSNumber *)arg1 ;
@end

