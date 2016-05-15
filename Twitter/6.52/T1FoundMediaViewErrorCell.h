/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <TFNUI/TFNCollectionViewCell.h>

@class UILabel, TFNButton, NSString;

@interface T1FoundMediaViewErrorCell : TFNCollectionViewCell {

	/*^block*/id _retryActionBlock;
	UILabel* _titleLabel;
	UILabel* _errorTextLabel;
	TFNButton* _retryButton;

}

@property (nonatomic,readonly) UILabel * titleLabel;                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * errorTextLabel;              //@synthesize errorTextLabel=_errorTextLabel - In the implementation block
@property (nonatomic,readonly) TFNButton * retryButton;               //@synthesize retryButton=_retryButton - In the implementation block
@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) NSString * errorText; 
@property (nonatomic,copy) id retryActionBlock;                       //@synthesize retryActionBlock=_retryActionBlock - In the implementation block
-(TFNButton *)retryButton;
-(void)_retryButtonDidTap;
-(UILabel *)errorTextLabel;
-(void)setRetryActionBlock:(id)arg1 ;
-(id)retryActionBlock;
-(void)setErrorText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(void)setTitleText:(NSString *)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(NSString *)errorText;
-(NSString *)titleText;
@end

