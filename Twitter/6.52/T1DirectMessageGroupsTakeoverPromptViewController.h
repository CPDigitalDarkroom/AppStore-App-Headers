/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/T1TakeoverPromptViewController.h>
#import <Twitter/T1TakeoverPromptViewDelegate.h>
#import <Twitter/T1ClientTakeoverPrompt.h>

@class NSString;

@interface T1DirectMessageGroupsTakeoverPromptViewController : T1TakeoverPromptViewController <T1TakeoverPromptViewDelegate, T1ClientTakeoverPrompt>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)shouldShowForAccount:(id)arg1 ;
+(id)prompt;
-(void)takeoverPromptView:(id)arg1 didTapActionButton:(id)arg2 ;
-(void)takeoverPromptView:(id)arg1 didTapCloseButton:(id)arg2 ;
-(void)viewDidLoad;
-(void)_dismiss;
@end

