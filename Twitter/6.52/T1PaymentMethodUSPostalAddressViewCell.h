/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TFNUI/TFNTableViewCell.h>

@class TFNTwitterPostalAddress, T1PaymentMethodCreditCardView, UIImageView, UILabel, NSString;

@interface T1PaymentMethodUSPostalAddressViewCell : TFNTableViewCell {

	TFNTwitterPostalAddress* _address;
	T1PaymentMethodCreditCardView* _cardView;
	UIImageView* _shippingImageView;
	UILabel* _nameLabel;
	UILabel* _address1Label;
	UILabel* _address2Label;
	UILabel* _cityStateZipLabel;
	UILabel* _emailAddressLabel;
	NSString* _email;

}

@property (nonatomic,retain) TFNTwitterPostalAddress * address;                       //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) T1PaymentMethodCreditCardView * cardView;              //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,readonly) UIImageView * shippingImageView;                       //@synthesize shippingImageView=_shippingImageView - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                                   //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * address1Label;                               //@synthesize address1Label=_address1Label - In the implementation block
@property (nonatomic,readonly) UILabel * address2Label;                               //@synthesize address2Label=_address2Label - In the implementation block
@property (nonatomic,readonly) UILabel * cityStateZipLabel;                           //@synthesize cityStateZipLabel=_cityStateZipLabel - In the implementation block
@property (nonatomic,readonly) UILabel * emailAddressLabel;                           //@synthesize emailAddressLabel=_emailAddressLabel - In the implementation block
@property (nonatomic,readonly) NSString * email;                                      //@synthesize email=_email - In the implementation block
+(id)accessoryImageForType:(int)arg1 layoutMetrics:(id)arg2 ;
-(UILabel *)address1Label;
-(UILabel *)address2Label;
-(UILabel *)cityStateZipLabel;
-(UIImageView *)shippingImageView;
-(UILabel *)emailAddressLabel;
-(void)setCreditCard:(id)arg1 Address:(id)arg2 email:(id)arg3 ;
-(T1PaymentMethodCreditCardView *)cardView;
-(UILabel *)nameLabel;
-(TFNTwitterPostalAddress *)address;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setAddress:(TFNTwitterPostalAddress *)arg1 ;
-(NSString *)email;
@end

