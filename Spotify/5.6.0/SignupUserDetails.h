/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSNumber, SPTLoginMarketSignupRestrictions;

@interface SignupUserDetails : NSObject {

	NSString* _email;
	NSString* _password;
	NSString* _passwordVerification;
	NSString* _username;
	NSDate* _birthday;
	NSString* _gender;
	NSNumber* _acceptedTC;
	NSNumber* _acceptedPrivacyPolicy;
	NSString* _inviteCode;
	SPTLoginMarketSignupRestrictions* _marketRestrictions;

}

@property (nonatomic,retain) NSString * email;                                                   //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSString * password;                                                //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * passwordVerification;                                    //@synthesize passwordVerification=_passwordVerification - In the implementation block
@property (nonatomic,retain) NSString * username;                                                //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSDate * birthday;                                                  //@synthesize birthday=_birthday - In the implementation block
@property (nonatomic,retain) NSString * gender;                                                  //@synthesize gender=_gender - In the implementation block
@property (nonatomic,retain) NSNumber * acceptedTC;                                              //@synthesize acceptedTC=_acceptedTC - In the implementation block
@property (nonatomic,retain) NSNumber * acceptedPrivacyPolicy;                                   //@synthesize acceptedPrivacyPolicy=_acceptedPrivacyPolicy - In the implementation block
@property (nonatomic,retain) NSString * inviteCode;                                              //@synthesize inviteCode=_inviteCode - In the implementation block
@property (nonatomic,retain) SPTLoginMarketSignupRestrictions * marketRestrictions;              //@synthesize marketRestrictions=_marketRestrictions - In the implementation block
-(NSString *)passwordVerification;
-(NSNumber *)acceptedPrivacyPolicy;
-(char)isRequiredDataSpecified;
-(NSNumber *)acceptedTC;
-(SPTLoginMarketSignupRestrictions *)marketRestrictions;
-(void)setPasswordVerification:(NSString *)arg1 ;
-(void)setAcceptedTC:(NSNumber *)arg1 ;
-(void)setAcceptedPrivacyPolicy:(NSNumber *)arg1 ;
-(void)setMarketRestrictions:(SPTLoginMarketSignupRestrictions *)arg1 ;
-(char)hasUserAcceptLegalRequirements;
-(id)escapedParameter:(id)arg1 ;
-(id)serializedPostData;
-(id)birthdayComponents;
-(NSDate *)birthday;
-(void)setBirthday:(NSDate *)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)inviteCode;
-(void)setInviteCode:(NSString *)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end

