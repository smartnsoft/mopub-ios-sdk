# MoPub iOS SDK

Thanks for taking a look at MoPub! We take pride in having an easy-to-use, flexible monetization solution that works across multiple platforms.

Sign up for an account at [http://app.mopub.com/](http://app.mopub.com/).

## Need Help?

You can find integration documentation on our [wiki](https://github.com/mopub/mopub-ios-sdk/wiki/Getting-Started) and additional help documentation on our [developer help site](https://www.mopub.com/resources/docs).

To file an issue with our team, email [support@mopub.com](mailto:support@mopub.com).

**Please Note: We no longer accept GitHub Issues**

## New Pull Requests?

Thank you for submitting pull requests to the MoPub iOS GitHub repository. Our team regularly monitors and investigates all submissions for inclusion in our official SDK releases. Please note that MoPub does not directly merge these pull requests at this time. Please reach out to your account team or [support@mopub.com](mailto:support@mopub.com) if you have further questions.

## Disclosure
MoPub v4.16 SDK integrates technology from our partners Integral Ad Science, Inc. (“IAS”) and Moat, Inc. (“Moat”) in order to support viewability measurement and other proprietary reporting that [IAS](https://integralads.com/capabilities/viewability/) and [Moat](https://moat.com/analytics) provide to their advertiser and publisher clients. You have the option to remove or disable this technology by following the opt-out instructions [below](#disableViewability).

If you do not remove or disable IAS's and/or Moat’s technology in accordance with these instructions, you agree that IAS's [privacy policy](https://integralads.com/privacy-policy/) and [license](https://integralads.com/sdk-license-agreement) and Moat’s [privacy policy](https://moat.com/privacy),  [terms](https://moat.com/terms), and [license](https://moat.com/sdklicense.txt), respectively, apply to your integration of these partners' technologies into your application.

## Download

The MoPub SDK is distributed as source code that you can include in your application.  MoPub provides two prepackaged archives of source code:

- **[MoPub Base SDK.zip](http://bit.ly/2bH8ObO)**

  Includes everything you need to serve HTML, MRAID, and Native MoPub advertisements.  Third party ad networks are not included.

- **[MoPub Base SDK Excluding Native.zip](http://bit.ly/2bCCgRw)**

  Includes everything you need to serve HTML and MRAID advertisements.  Third party ad networks and Native MoPub advertisements are not included.

The current version of the SDK is 4.16.0

## Integrate

Integration instructions are available on the [wiki](https://github.com/mopub/mopub-ios-sdk/wiki/Getting-Started).

More detailed class documentation is available in the repo under the `ClassDocumentation` folder.  This can be viewed [online too](http://htmlpreview.github.com/?https://github.com/mopub/mopub-ios-sdk/blob/master/ClassDocumentation/index.html).

## New in this Version

Please view the [changelog](https://github.com/mopub/mopub-ios-sdk/blob/master/CHANGELOG.md) for details.

- **Features**
    - Added viewability support for Integral Ad Science (IAS) and Moat, two of the leading independent viewability measurement providers
        - To disable this feature, see note below on [Disabling Viewability Measurement](#disableViewability).
    - New app launch rewarded video initialization method for mediated network SDKs
- **Bug Fixes**
    - Fixed native video crash caused by empty VAST tracking event
    - Prevent interstitials from firing clicks without user interaction

See the [Getting Started Guide](https://github.com/mopub/mopub-ios-sdk/wiki/Getting-Started#app-transport-security-settings) for instructions on setting up ATS in your app.

### <a name="disableViewability"></a>Disabling Viewability Measurement
There are a few options for opting out of viewability measurement:
##### Opting Out in a Manual Integration
Before dragging the MoPubSDK folder from Finder into your Xcode project, navigate to MoPubSDK/Viewability/ in Finder, and remove the “Moat” folder to opt-out of Moat or the “Avid” folder to opt-out of IAS. If you would like to opt-out of both vendors, remove both folders.

Note: even if the Moat and/or Avid folders do not exist in the Xcode Project Navigator, if they do exist in your computer's filesystem, build errors can occur. To avoid build errors, be sure that the folders and the contained files have been removed from the MoPub SDK's "Viewability" folder in your computer's filesystem, and that there are no references to these files or folders in your Xcode project.
##### Opting Out in a CocoaPods Integration
Including `pod 'mopub-ios-sdk'` in your Podfile will include both IAS and Moat SDKs, as well as the MoPub SDK. In order to opt out:
- `pod 'mopub-ios-sdk/Avid'` will include the IAS SDK, but not the Moat SDK, as well as the MoPub SDK.
- `pod 'mopub-ios-sdk/Moat'` will include the Moat SDK, but not the IAS SDK, as well as the MoPub SDK.
- `pod 'mopub-ios-sdk/Core'` will only include the MoPub SDK, with viewability measurement totally disabled.

Make sure to run `pod update` once your Podfile is set up to your preferences.
##### Software Disable
If you would like to opt out of viewability measurement but do not want to modify the MoPub SDK, a function is provided for your convenience. As soon as possible after calling `[[MoPub sharedInstance] start]`, call `[[MoPub sharedInstance] disableViewability:(vendors)]`. In place of “(vendors)”, `MPViewabilityOptionIAS` will disable IAS but leave Moat enabled, `MPViewabilityOptionMoat` will disable Moat but leave IAS enabled, and `MPViewabilityOptionAll` will disable all viewability measurement.

### IMPORTANT 4.0 UPGRADE INSTRUCTIONS

See our [upgrade document](https://github.com/mopub/mopub-ios-sdk/wiki/Upgrading-Native-Ads-Integration-to-4.0) for complete native ads integration migration instructions.


## Requirements

iOS 7.0 and up

## License

We have launched a new license as of version 3.2.0. To view the full license, visit [http://www.mopub.com/legal/sdk-license-agreement/](http://www.mopub.com/legal/sdk-license-agreement/)
