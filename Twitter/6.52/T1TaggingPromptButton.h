/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:35 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIControl.h>
#import <Twitter/TFNTwitterAuthenticated.h>

@class T1TagSetView, UIImageView, NSString, TFNTwitterTagSet, TFNTwitterAccount;

@interface T1TaggingPromptButton : UIControl <TFNTwitterAuthenticated> {

	T1TagSetView* _tagSetView;
	UIImageView* _iconView;

}

@property (nonatomic,retain) NSString * titleForEmptyTagSet; 
@property (nonatomic,retain) TFNTwitterTagSet * tagSet; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account; 
-(void)setTagSet:(TFNTwitterTagSet *)arg1 ;
-(NSString *)titleForEmptyTagSet;
-(TFNTwitterTagSet *)tagSet;
-(void)setTitleForEmptyTagSet:(NSString *)arg1 ;
-(char)_shouldStyleBold;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)accessibilityLabel;
-(void)_updateStyle;
-(void)setHighlighted:(char)arg1 ;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
@end

